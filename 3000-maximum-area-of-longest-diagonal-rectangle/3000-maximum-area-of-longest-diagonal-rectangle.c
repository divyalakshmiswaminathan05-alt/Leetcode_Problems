int areaOfMaxDiagonal(int** dimensions, int dimensionsSize, int* dimensionsColSize) {
    int maxdiasquare=0;
    int maxarea=0;
    for(int i=0;i< dimensionsSize;i++){
    int l= dimensions[i][0];
    int w= dimensions[i][1];
    int diasq=l*l + w*w;
    int area=l*w;
    if(diasq>maxdiasquare){
        maxdiasquare=diasq;
        maxarea=area;

    }
    else if(diasq==maxdiasquare){
        if(area>maxarea){
            maxarea=area;
        }

    }
    }
    return maxarea;
    
}