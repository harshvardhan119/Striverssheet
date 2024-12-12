//Today I decided with DSA building som crazy stuff too so I decided to code in all three js ,TS,c++
c++  
// Selection sort 
 void selectionSort(vector<int> &arr) {
        
      int a = arr.size();
      for(int i=0;i<a;i++){
          for(int j=i;j<a;j++){
              if(arr[i]>arr[j]){
                  int b=0;
                  b=arr[i];
                  arr[i]=arr[j];
                  arr[j]=b;
              }
          }
    }
    
   }
   //Bubble Sort
      void bubbleSort(vector<int>& arr) {
        int a= arr.size();
        for(int i=0;i<a;i++){
            for(int j=0;j<a-1;j++){
                if(arr[j]>arr[j+1]){
                    int b =arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=b;
                }
            }
        }
    }
    //Insertion Sort
    