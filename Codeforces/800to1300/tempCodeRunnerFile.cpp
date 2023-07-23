    int start[3][3] = {{1,1,1},{1,1,1},{1,1,1}}; 
    int input[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> input[i][j];
            for(int k = 0; k < input[i][j]; k++){
                    if(start[i][j]==0){
                        start[i][j]++;
                    }else if(start[i][j]==1){
                        start[i][j]--;
                    }
                if(i==0){
                    if(start[i+1][j]==0){
                        start[i+1][j]++;
                    }else if(start[i+1][j]==1){
                        start[i+1][j]--;
                    }
                }
                if(j==0){
                    if(start[i][j+1]==0){
                        start[i][j+1]++;
                    }else if(start[i][j+1]==1){
                        start[i][j+1]--;
                    }
                }
                if(i==2){
                    if(start[i-1][j]==0){
                        start[i-1][j]++;
                    }else if(start[i-1][j]==1){
                        start[i-1][j]--;
                    }
                }
                if(j==2){
                    if(start[i][j-1]==0){
                        start[i][j-1]++;
                    }else if(start[i][j-1]==1){
                        start[i][j-1]--;
                    }
                }
                if(i==1){
                    if(start[i-1][j]==0){
                        start[i-1][j]++;
                    }else if(start[i-1][j]==1){
                        start[i-1][j]--;
                    }
                    if(start[i+1][j]==0){
                        start[i+1][j]++;
                    }else if(start[i+1][j]==1){
                        start[i+1][j]--;
                    }
                }
                if(j==1){
                    if(start[i][j-1]==0){
                        start[i][j-1]++;
                    }else if(start[i][j-1]==1){
                        start[i][j-1]--;
                    }
                    if(start[i][j+1]==0){
                        start[i][j+1]++;
                    }else if(start[i][j+1]==1){
                        start[i][j+1]--;
                    }
                }
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << start[i][j];
        }
        cout << endl;
    }

    return 0;