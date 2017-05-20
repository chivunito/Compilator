int addition(int a, int b){
	return a+b;
}

int main(){
	int a=10,b=100;
	while(a){
		if(a){
			b=addition(a,b);
		}
		a=a-1;
	}
	return 2;
}