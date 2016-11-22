		/* Enter your code here. */
       try{
           int temp = Server::compute(A, B);
           cout << temp << endl;
       }catch(bad_alloc &e){
           cout << "Not enough memory" << endl;
       }catch(invalid_argument &e){
           cout << "Exception: " << e.what() << endl;
       }catch(exception &e){
           cout << "Exception: " << e.what() << endl;
       }catch(...){
           cout << "Other Exception" << endl;
       }
