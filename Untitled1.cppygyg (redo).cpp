#include <iostream>
using namespace std;

class Log
{
public:
	const int *LogLevelError=0;
	const int *LogLevelwarning=1;
	const int *LogLevelInfo=2;
	
	SetLevel(LogLevelwarning);
	Error(LogLevelError);
	Warn(LogLevelInfo);
	
	
private:
	
	int m_LogLevel=LogLevelInfo;
public:
	void SetLevel(int level)
	{
		m_LogLevel=level;
	}
	void Error(const char message)
	{
		if(m_LogLevel>=LogLevelError)
		cout<<"[ERROR]:"<<message<<endl;
	}
	
	void Warn(const char message)
	{
		if (m_LogLevel>=LogLevelwarning)
		cout<<"[WARNING]:"<<message<<endl;
	}
	void Info (const char message)
	{
		if(m_LogLevel>=LogLevelInfo)
		cout<<"[INFO]:"<<message<<endl;
	};
}

int main()
{
Log oLog;
oLog.SetLevel(LogLevelWarning);
oLog.Warn("Hello!!!");

std::cin.get();
}
