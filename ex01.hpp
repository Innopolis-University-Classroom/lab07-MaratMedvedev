
//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body
template <typename T>
void multiples (T& sum, T x, T n)
{  sum++;
  for(int i = 0; i<n;i++){
    sum+=x;
  }
}
