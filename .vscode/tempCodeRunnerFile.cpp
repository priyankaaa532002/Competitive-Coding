#include <iostream>
using namespace std;

class Polynomial{
public:
	int degree;
	Polynomial(){coef = new double[1];degree=0;coef[degree]=0;};
	
	~Polynomial(){delete [] coef;}
	void input();
	void output();
	void reset(int ndeg);
	void add(const Polynomial& pol);
	void subtract(const Polynomial& pol);
	void mult(const Polynomial& pol);
	void div(const Polynomial& divisor, const Polynomial& quotient, const Polynomial& remainder);
	friend Polynomial operator+(const Polynomial&, const Polynomial&); 
	friend istream& operator>>(istream&, Polynomial&); 
	friend ostream& operator<<(ostream&, const Polynomial &); 
private:
	double* coef;
	
	Polynomial(const Polynomial& base, double scalar,int mdegree);
	Polynomial(const Polynomial& base, const Polynomial& divypol);
	void checkandreduce(); 

};

void Polynomial::reset(int ndeg){
	degree = ndeg;
	delete [] coef;
	coef = new double[ndeg+1];
	for(int r=ndeg; r>=0; r--){
		coef[r] = 0;
	}
}

void Polynomial::checkandreduce(){
	for(int kl = degree; kl>=0; kl--){
		if(coef[kl]==0)continue;
		else{
			degree = kl;
			break;
		}
	}
}

ostream& operator <<(ostream& output, const Polynomial& pol){
	int cdegree;
    int first = 0;
    cdegree = pol.degree+1;
    while (cdegree>0){
        cdegree--;
        if(pol.coef[cdegree]==0)continue;
        if(pol.coef[cdegree]>0){
            if((cdegree==0) && (first==0)){
                output<< pol.coef[cdegree];
                first=1;
                continue;
            }
            if((cdegree==0) && (first==1)){
                output<< "+" << pol.coef[cdegree];
                continue;
            }
            if((cdegree==1) && (first==0) && (pol.coef[cdegree]!=1)){
                output<< pol.coef[cdegree]<<"*x";
                first=1;
                continue;
            }
            if((cdegree==1) && (first==1)&&(pol.coef[cdegree]!=1)){
                output<< "+" << pol.coef[cdegree]<<"*x";
                continue;
            }
            if((cdegree==1) && (first==0) && (pol.coef[cdegree]==1)){
                output<< "x";
                first=1;
                continue;
            }
            if((cdegree==1) && (first==1)&&(pol.coef[cdegree]==1)){
                output<< "+" << "x";
                continue;
            }
            if((first==0)&&(pol.coef[cdegree]==1)){
                output << "x^" << cdegree;
                first=1;
                continue;
            }
            if((first==1)&&(pol.coef[cdegree]==1)){
                output << "+x^" << cdegree;
                continue;
            }
            if(first==0){
                output << pol.coef[cdegree] << "*x^" << cdegree;
                first=1;
                continue;
            }
            if(first==1){
                output << "+" << pol.coef[cdegree] << "*x^" << cdegree;
                continue;
            }
        }
        if(pol.coef[cdegree]<0){
            if(cdegree==0){
                output<< pol.coef[cdegree];
                first=1;
                continue;
            }
            if((cdegree==1)&&(pol.coef[cdegree]==-1)){
                output<< "-x";
                first=1;
                continue;
            }
            if(pol.coef[cdegree]==-1){
                output << "-x^" << cdegree;
                first=1;
                continue;
            }
            else{
                output << pol.coef[cdegree] << "*x^" << cdegree;
                first=1;
                continue;
			}
		}
		
	}	
	return output;
}

Polynomial operator +(const Polynomial& pol1, const Polynomial& pol2){
	Polynomial finpol;
	if(pol1.degree<=pol2.degree)finpol.reset(pol2.degree);
	if(pol1.degree>pol2.degree)finpol.reset(pol1.degree);
	finpol.add(pol1);
	finpol.add(pol2);
	return finpol;
}

Polynomial operator -(const Polynomial& pol1, const Polynomial& pol2){
	Polynomial finpol2;
	if(pol1.degree<=pol2.degree)finpol2.reset(pol2.degree);
	if(pol1.degree>pol2.degree)finpol2.reset(pol1.degree);
	finpol2.add(pol1);
	finpol2.subtract(pol2);
	return finpol2;
}

Polynomial operator *(const Polynomial& pol1, const Polynomial& pol2){
	Polynomial finpol3;
	finpol3.reset(pol2.degree+pol1.degree);
	finpol3.add(pol1);
	finpol3.mult(pol2);
	return finpol3;
}

Polynomial operator /(const Polynomial& pol1, const Polynomial& pol2){
	Polynomial finpol3;
	Polynomial quotient;
	Polynomial rem;
	finpol3.reset(pol1.degree);
	cout << endl << "reset: " << finpol3 << endl;
	quotient.reset(pol1.degree-pol2.degree);
	rem.reset(pol1.degree-pol2.degree);
	finpol3.add(pol1);
	cout << endl << "add pol1: " << finpol3 << endl;
	
	finpol3.div(pol2,quotient,rem);
	cout << endl << "div pol2: " << finpol3 << endl;
	return finpol3;
}

Polynomial operator %(const Polynomial& pol1, const Polynomial& pol2){
	Polynomial finpol4;
	Polynomial quotient;
	Polynomial rem;
	finpol4.reset(pol1.degree-pol2.degree);
	cout << endl << "reset: " << finpol4 << endl;
	quotient.reset(pol1.degree-pol2.degree);
	rem.reset(pol1.degree-pol2.degree);
	finpol4.add(pol1);
	cout << endl << "add pol1: " << finpol4 << endl;
	finpol4.div(pol2,quotient,rem);
	cout << endl << "div pol2: " << finpol4 << endl;
	rem.reset(pol1.degree);
	rem.add(pol1);
	finpol4.mult(pol2);
	rem.subtract(finpol4);
	return finpol4;
}

Polynomial::Polynomial(const Polynomial& base, double scalar, int mdegree){
	degree = base.degree + mdegree;
    int i = degree;
	int j = base.degree;
    degree = base.degree+mdegree;
	coef = new double[degree+1];
    do{
		coef[i] = scalar * base.coef[j];
		i--;
		j--;
	}while((i>=0)&&(j>=0));
}

void Polynomial::add(const Polynomial& pol){
    int ndegree = degree;
    int adegree = pol.degree;
    do{
		if(ndegree==adegree){
			while(ndegree>=0){
				coef[ndegree] = coef[ndegree] + pol.coef[ndegree];
				ndegree--;
			}
			break;
		}
		if(ndegree>adegree){
			while(ndegree!=adegree){
				ndegree--;
			}
			while(ndegree>=0){
				coef[ndegree] += pol.coef[ndegree];
				ndegree--;
			}
			break;
		}
		if(ndegree<adegree){
			degree=adegree;
			while(ndegree!=adegree){
				coef[adegree] = pol.coef[adegree];
				adegree--;
			}
			while(ndegree>=0){
				coef[ndegree] += pol.coef[ndegree];
				ndegree--;
			}
			break;
		}
    }while(ndegree>=0);
}

void Polynomial::subtract(const Polynomial& pol){
    int ndegree = degree;
    int sdegree = pol.degree;
    do{
		if(ndegree==sdegree){
			while(ndegree>=0){
				coef[ndegree] = coef[ndegree] - pol.coef[ndegree];
				ndegree--;
			}
			break;
		}
		if(ndegree>sdegree){
			while(ndegree!=sdegree){
				ndegree--;
			}
			while(ndegree>=0){
				coef[ndegree] -= pol.coef[ndegree];
				ndegree--;
			}
			break;
		}
		if(ndegree<sdegree){
			degree=sdegree;
			while(ndegree!=sdegree){
				coef[sdegree] = pol.coef[sdegree]*-1;
				sdegree--;
			}
			while(ndegree>=0){
				coef[ndegree] -= pol.coef[ndegree];
				ndegree--;
			}
			break;
		}
    }while(ndegree>=0);
}

void Polynomial::mult(const Polynomial& pol){
    Polynomial multypol;
    multypol.reset(pol.degree+degree);
    for(int i = pol.degree; i >= 0; i--){
		Polynomial tmp(*this,pol.coef[i],i);
		multypol.add(tmp);
	}
    reset(multypol.degree);
    for(int finaldeg = degree+1; finaldeg >= 0; finaldeg--){
        coef[finaldeg] = multypol.coef[finaldeg];
    }
}

void Polynomial::div(const Polynomial& divy, const Polynomial& quo, const Polynomial& rem){
	Polynomial divypoly = *this;
	Polynomial resulta;
	degree = divypoly.degree-divy.degree;
	resulta.reset(degree);
	for(int i = degree; i >=0; i--){
		divypoly.checkandreduce();
		Polynomial tmp(divypoly,divy);
		resulta.add(tmp);
		tmp.mult(divy);
		divypoly.subtract(tmp);
	}
	cout << resulta;
	*this = resulta;
	output();
}
	
Polynomial::Polynomial(const Polynomial& divypoly, const Polynomial& divy){
	degree = (divypoly.degree-divy.degree);
	coef = new double[(degree+1)];
	coef[degree]=divypoly.coef[divypoly.degree]/divy.coef[divy.degree];
	for(int j=(degree-1);j>=0;j--){
		coef[j]=0;
	}
}

void Polynomial::input(){ 
    int cdegree;
    cin >> degree;
    cdegree = degree;
    delete [] coef;
    coef=new double [cdegree+1];
    while (cdegree>=0){
        cin >> coef[cdegree];
        cdegree--;
    }
}

void Polynomial::output(){ 
    int cdegree;
    int first = 0;
    cdegree = degree+1;
    while (cdegree>0){
        cdegree--;
        if(coef[cdegree]==0)continue;
        if(coef[cdegree]>0){
            if((cdegree==0) && (first==0)){
                cout<< coef[cdegree];
                first=1;
                continue;
            }
            if((cdegree==0) && (first==1)){
                cout<< "+" << coef[cdegree];
                continue;
            }
            if((cdegree==1) && (first==0) && (coef[cdegree]!=1)){
                cout<< coef[cdegree]<<"*x";
                first=1;
                continue;
            }
            if((cdegree==1) && (first==1)&&(coef[cdegree]!=1)){
                cout<< "+" << coef[cdegree]<<"*x";
                continue;
            }
            if((cdegree==1) && (first==0) && (coef[cdegree]==1)){
                cout<< "x";
                first=1;
                continue;
            }
            if((cdegree==1) && (first==1)&&(coef[cdegree]==1)){
                cout<< "+" << "x";
                continue;
            }
            if((first==0)&&(coef[cdegree]==1)){
                cout << "x^" << cdegree;
                first=1;
                continue;
            }
            if((first==1)&&(coef[cdegree]==1)){
                cout << "+x^" << cdegree;
                continue;
            }
            if(first==0){
                cout << coef[cdegree] << "*x^" << cdegree;
                first=1;
                continue;
            }
            if(first==1){
                cout << "+" << coef[cdegree] << "*x^" << cdegree;
                continue;
            }
        }
        if(coef[cdegree]<0){
            if(cdegree==0){
                cout<< coef[cdegree];
                first=1;
                continue;
            }
            if((cdegree==1)&&(coef[cdegree]==-1)){
                cout<< "-x";
                first=1;
                continue;
            }
            if(coef[cdegree]==-1){
                cout << "-x^" << cdegree;
                first=1;
                continue;
            }
            else{
                cout << coef[cdegree] << "*x^" << cdegree;
                first=1;
                continue;
			}
		}
		
	}
}

int main()
{
    Polynomial poly1,poly2;
	char choice;
    int done = 0;
    cout << "CGS 2421: Polynomial calculator" << endl;
    do{
        cout << endl << endl <<"0. Quit"
        << endl <<"1. Enter polynomials"
        << endl <<"2. Add"
        << endl <<"3. Subtract"
        << endl <<"4. Multiply"
        << endl <<"5. Divide"
        << endl <<"6. Remainder" << endl << endl;
		
		
        do{
            cout << "Enter your choice : ";
            cin >> choice;
            if((choice!='6') && (choice!='5') && (choice!='4') && (choice!='3')
			   && (choice!='2') && (choice!='1') && (choice!='0')){
                cout << "'" << choice << "' is an invalid choice"<< endl;
            }
        }while((choice!='6') && (choice!='5') && (choice!='4') && (choice!='3')
			   && (choice!='2') && (choice!='1') && (choice!='0'));
        if(choice=='0')exit(1);
        if(choice=='1'){
			cout << "Enter polynomial 1 (degree then coefficients) : ";
            poly1.input();
            cout << "Enter polynomial 2 (degree then coefficients) : ";
			poly2.input();
			done=1;
        }
        if(choice=='2'){
            if(done==0){
                cout << "Enter the polynomial first" << endl;
                continue;
            }
			cout << "(" << poly1 << ")+(" << poly2 << ")=" << (poly1+poly2);
        }
        if(choice=='3'){
            if(done==0){
                cout << "Enter the polynomial first" << endl;
                continue;
            }
			cout << "(" << poly1 << ")-(" << poly2 << ")=" << (poly1-poly2);
        }
        if(choice=='4'){
            if(done==0){
                cout << "Enter the polynomial first" << endl;
                continue;
            }
			cout << "(" << poly1 << ")*(" << poly2 << ")=" << (poly1*poly2);
        }
        if(choice=='5'){
            if(done==0){
                cout << "Enter the polynomial first" << endl;
                continue;
            }
			cout << "(" << poly1 << ")/(" << poly2 << ")=" << (poly1/poly2);
        }
        if(choice=='6'){
            if(done==0){
                cout << "Enter the polynomial first" << endl;
                continue;
            }
			cout << "(" << poly1 << ")%(" << poly2 << ")=" << (poly1%poly2);
        }
    }while(choice!=0);
	
	
	return 0;
}