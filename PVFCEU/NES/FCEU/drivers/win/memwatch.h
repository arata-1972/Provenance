void UpdateMemWatch();
void CreateMemWatch();
bool CloseMemoryWatch();
void AddMemWatch(char memaddress[32]);
void RamChange();
extern char * MemWatchDir;
extern bool MemWatchLoadOnStart;
extern bool MemWatchLoadFileOnStart;
extern char *memw_recent_files[];
extern HWND memw_pwindow;
extern bool RamChangeInitialize;
extern bool MemWCollapsed;
extern bool BindToMain;