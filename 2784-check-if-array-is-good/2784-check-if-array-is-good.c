bool isGood(int* nums, int numsSize) {

    int max=0;
    int gecici=0;

    for(int i=0; i<numsSize; i++){
        if(nums[i]>max){
            max=nums[i];
        }
    }

    if(numsSize != max + 1){
        return 0;
    }
    
    for(int i=0; i<numsSize; i++){
        gecici=nums[i];
        int sayac=0;
        for(int j=0; j<numsSize; j++){
            if(gecici==nums[j]){
                sayac++;
            }

        }

        if(gecici==max){
            if(sayac > 2) return 0;
        }else{
            if(sayac !=1 ) return 0;
        }
    }
    return 1;
  
}