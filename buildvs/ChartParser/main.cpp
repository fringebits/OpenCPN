// ChartParser.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <s57.h>

int _tmain(int argc, _TCHAR* argv[])
{

    std::string filename = "D:\\Data\\WA_ECNs\\ENC_ROOT\\US3WA46M\\US3WA46M.000";

    {
        auto reader = std::make_shared<S57Reader>(filename.c_str());
        int ret = reader->Open(false);
        auto module = reader->GetModule();
        module->Dump(stdout);
        reader->Close();
    }
   
	return 0;
}

