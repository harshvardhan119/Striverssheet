//Star pattern
// For every value of ‘N’, help sam to print the corresponding N-dimensional forest.

// Example:
// Input: ‘N’ = 3

// Output: 
// * * *
// * * *
// * * *

--->>
void nForest(int n) {
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			cout<<"*"<<" ";
		}
			cout<<endl;
	}
}

// For every value of ‘N’, help sam to print the corresponding N/2-dimensional forest.

// Example:
// Input:  ‘N’ = 3

// Output: 
// * 
// * *
// * * *

---->>
void nForest(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}


// For every value of ‘N’, help sam to print the corresponding N-dimensional Triangle.

// Example:
// Input: ‘N’ = 3

// Output: 
// 1
// 1 2 
// 1 2 3

---->>
void nTriangle(int n) {
	
	for(int i=0;i<n;i++){
		for(int j=1;j<=i+1;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}


}


// For every value of ‘N’, help sam to print the corresponding Triangle.

// Example:
// Input: ‘N’ = 3

// Output: 
// 1
// 2 2 
// 3 3 3

---->>
void triangle(int n) {
	
	int k=1;
	for(int i=0;i<n;i++){
		for(int j=1;j<=i+1;j++){
			
			cout<<k<<" ";
		}
		k++;
		cout<<endl;
	


}
}


// For every value of ‘N’, print the field if the trees are represented by ‘*’.

// Example:
// Input: ‘N’ = 3

// Output: 
// * * *
// * *
// *

---->>
void seeding(int n) {
	for(int i=n;i>0;i--){
		for(int j =i;j>0;j--){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}


// Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the Reverse N-Number Triangle.

// Example:
// Input: ‘N’ = 3

// Output: 

// 1 2 3
// 1 2
// 1

---->>
void nNumberTriangle(int n) {
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// Sample Input 1:
// 3
// Sample Output 1:
//   *
//  ***
// *****

---->>
void nStarTriangle(int n) {
    for(int k=1;k<=n;k++){
      for (int i = n - k; i > 0; i--) {
        cout << " ";
      }
      for(int j= (2*k)-1;j>0;j--){
          cout<<"*";
      }
      cout<<endl;
    }
}

// Sample Input 1:
// 3
// Sample Output 1:
// *****
//  ***
//   *

---->>
void nStarTriangle(int n) {
    for(int k=n;k>=1;k--){
      for (int i = n - k; i > 0; i--) {
        cout << " ";
      }
      for(int j= (2*k)-1;j>0;j--){
          cout<<"*";
      }
      cout<<endl;
    }
}


// Input: ‘N’ = 3

// Output: 

//   *
//  ***
// *****
// *****
//  ***
//   *

---->>
void nStarDiamond(int n) {
     for(int k=1;k<=n;k++){
      for (int i = n - k; i > 0; i--) {
        cout << " ";
      }
      for(int j= (2*k)-1;j>0;j--){
          cout<<"*";
      }
      cout<<endl;
    }
     for(int k=n;k>=1;k--){
      for (int i = n - k; i > 0; i--) {
        cout << " ";
      }
      for(int j= (2*k)-1;j>0;j--){
          cout<<"*";
      }
      cout<<endl;
    }
}


// Example:
// Input: ‘N’ = 3

// Output: 

// *
// **
// ***
// **
// *

---->>
void nStarTriangle(int n) {
     for(int k=1;k<n;k++){
      
      for(int j= k;j>0;j--){
          cout<<"*";
      }
      cout<<endl;
    }
     for(int k=n;k>=1;k--){
      
      for(int j= k;j>0;j--){
          cout<<"*";
      }
      cout<<endl;
    }

}


// Example:
// Input: ‘N’ = 3

// Output: 

// 1
// 0 1
// 1 0 1

---->>
void nBinaryTriangle(int n) {
    int a=0;
   for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++){
           if(a==0){
               a=1;
           }
           else{a=0;}
        cout<<a<<" ";

       }
       i%2==0?a=1:a=0;
       cout<<endl;
   }
}



