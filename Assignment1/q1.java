
class code{
public  static  void moveZeroes(int[] nums) {
    int n = nums.length;
    int left = 0; 
    

    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[left] = nums[i];
            left++;
        }
    }
    
  
    while (left < n) {
        nums[left] = 0;
        left++;
    }

   

    for(int i =0;i<n;i++){
        System.out.println(nums[i]);
    }

}


public static void main(String args[]){
  int arr[]={0,1,3,1,3,0,5,0};

    moveZeroes(arr);



}

}