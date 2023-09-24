float relu(float input){
    if(input<0) return 0;
    else return input;
}
float relu_d(float input){
    if(input<0) return 0;
    else return 1;
}
float sigmoid(float input){
    return 1.0/(1.0+exp(-input));
}
float sigmoid_d(float input){
    float sig = sigmoid(input); return sig*(1-sig);
}
void softmax(int input_size, float* input, int* output){
    
}