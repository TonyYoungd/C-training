#include"iostream"
using namespace std;
//������ѵ��
//�����������ݽṹ 
struct BiTree{
	char v;
	struct BiTree *l;
	struct BiTree *r;
}*T; 
//���������
void creat(BiTree* &T){
	char ch;
	cin>>ch;
	if(ch=='#'){
		T=NULL;
		return;
	}else{
		T=new BiTree;
		T->v=ch;
		creat(T->l);
		creat(T->r);
	}
}

//�������������
void first(BiTree* &T){
	if(T){
		cout<< T->v;
		first(T->l);
		first(T->r);
	}else{
		cout<<"";
	}
} 
//�������
void middle(BiTree* &T){
	if(T){
		middle(T->l);
		cout<<T->v;
		middle(T->r);
	}else{
		cout<<"";
	}
}
//�������
void end(BiTree* &T){
	if(T){
		end(T->l);
		end(T->r);
		cout<<T->v;
	}else{
		cout<<"";
	}
} 
int main(){
	creat(T);
		cout<<endl;
	first(T);
		cout<<endl;
	middle(T);
		cout<<endl;
	end(T);
	return 0;
}
