

                    #include<iostream>

                    using namespace std;

                    int main(){


                        // int row,col;

                        // cin>>row>>col;

                        // for(int i=0;i<row;i++){
                        //     for(int j=0;j<col;j++){
                        //         if(i==0 || i==row-1){
                        //             cout<<"*";
                        //         }
                        //         else if (j==0 || j==col-1){
                        //             cout<<"*";
                        //         }
                        //         else{
                        //             cout<<" ";
                        //         }
                        //     }
                        //     cout<<"\n";
                        // }


                        int row=50;


                        for(int i=1;i<=row;i++){
                            int star=i;
                            int space=2*row-2*i;
                            for(int j=1;j<=star;j++){
                                cout<<"*";

                            }
                            for(int j=1;j<=space;j++){
                                cout<<" ";

                            }
                            for(int j=1;j<=star;j++){
                                cout<<"*";

                            }
                            
                            cout<<endl;
                        }



                        for(int i=row;i>=1;i--){
                            int star=i;
                            int space=2*row-2*i;
                            for(int j=1;j<=star;j++){
                                cout<<"*";

                            }
                            for(int j=1;j<=space;j++){
                                cout<<" ";

                            }
                            for(int j=1;j<=star;j++){
                                cout<<"*";

                            }
                            
                            cout<<endl;
                        }






                        // for(int i=0;i<row;i++){
                        //     int star=(2*row-2*i)/2;
                        //     int space=(2*row)-(2*row-2*i);
                        //     for(int j=1;j<=star;j++){
                        //         cout<<"*";

                        //     }
                        //     for(int j=1;j<=space;j++){
                        //         cout<<" ";

                        //     }
                        //     for(int j=1;j<=star;j++){
                        //         cout<<"*";

                        //     }
                            
                        //     cout<<endl;
                        // }





























                        return 0;
                    }