// CamStudio Open Source - Commandline Header File
// License: GPL
// Coded by karol(dot)toth(at)gmail(dot)com

class screen{
public:
	int index;
	int left;
	int right;
	int top;
	int bottom;
	int width;
	int height;
	char outFile[256];
	char dispName[256];
	screen(){
		
	};

	bool SetDimensions(int left, int right, int top, int bottom){
		if(right > left && bottom > top){
			this->left = left;
			this->right = right;
			this->top = top;
			this->bottom = bottom;
			this->width = (right - left) ;
			this->height = (bottom - top);
			return true;
		}
		else{
			return false;
		}

	}
	//bool SetName(string name);
protected:
};
