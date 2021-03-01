#ifndef _DIRECTX9_CORE_
#define _DIRECTX9_CORE_

#include <d3d9.h>
#include <d3dx9effect.h>

#ifndef D3DXSHADER_ENABLE_BACKWARDS_COMPATIBILITY
#define D3DXSHADER_ENABLE_BACKWARDS_COMPATIBILITY   0x1000
#endif

// Direct3DCreate9Ex
extern LPDIRECT3D9EX (WINAPI* _Direct3DCreate9Ex) (UINT);

// D3DXFillTextureTX
extern HRESULT (WINAPI* _D3DXFillTextureTX) (LPDIRECT3DTEXTURE9, LPD3DXTEXTURESHADER);

// D3DXCreateBuffer
extern HRESULT (WINAPI* _D3DXCreateBuffer) (DWORD,LPD3DXBUFFER*);

// D3DXCreateEffectFromResource
#ifdef UNICODE
extern HRESULT (WINAPI* _D3DXCreateEffectFromResource) (LPDIRECT3DDEVICE9, HMODULE, LPCWSTR,const D3DXMACRO*,LPD3DXINCLUDE,DWORD,LPD3DXEFFECTPOOL,LPD3DXEFFECT*,LPD3DXBUFFER*);
#else
extern HRESULT (WINAPI* _D3DXCreateEffectFromResource) (LPDIRECT3DDEVICE9, HMODULE, LPCTSTR,const D3DXMACRO*,LPD3DXINCLUDE,DWORD,LPD3DXEFFECTPOOL,LPD3DXEFFECT*,LPD3DXBUFFER*);
#endif

// D3DXCreateEffectFromFile
#ifdef UNICODE
extern HRESULT (WINAPI* _D3DXCreateEffectFromFile) (LPDIRECT3DDEVICE9,LPCWSTR,const D3DXMACRO*,LPD3DXINCLUDE,DWORD,LPD3DXEFFECTPOOL,LPD3DXEFFECT*,LPD3DXBUFFER*);
#else
extern HRESULT (WINAPI* _D3DXCreateEffectFromFile) (LPDIRECT3DDEVICE9,LPCTSTR,const D3DXMACRO*,LPD3DXINCLUDE,DWORD,LPD3DXEFFECTPOOL,LPD3DXEFFECT*,LPD3DXBUFFER*);
#endif

// D3DXLoadSurfaceFromMemory
extern HRESULT (WINAPI* _D3DXLoadSurfaceFromMemory) (LPDIRECT3DSURFACE9,const PALETTEENTRY*,const RECT*,LPCVOID,D3DFORMAT,UINT,const PALETTEENTRY*,const RECT*,DWORD,D3DCOLOR);

// D3DXCompileShaderFromResource
#ifdef UNICODE
extern HRESULT (WINAPI* _D3DXCompileShaderFromResource) (HMODULE,LPCWSTR,const D3DXMACRO*,LPD3DXINCLUDE,LPCSTR,LPCSTR,DWORD,LPD3DXBUFFER*,LPD3DXBUFFER*,LPD3DXCONSTANTTABLE*);
#else
extern HRESULT (WINAPI* _D3DXCompileShaderFromResource) (HMODULE,LPCTSTR,const D3DXMACRO*,LPD3DXINCLUDE,LPCSTR,LPCSTR,DWORD,LPD3DXBUFFER*,LPD3DXBUFFER*,LPD3DXCONSTANTTABLE*);
#endif

// D3DXCompileShaderFromFile
#ifdef UNICODE
extern HRESULT (WINAPI* _D3DXCompileShaderFromFile) (LPCWSTR,const D3DXMACRO*,LPD3DXINCLUDE,LPCSTR,LPCSTR,DWORD,LPD3DXBUFFER*,LPD3DXBUFFER*,LPD3DXCONSTANTTABLE*);
#else
extern HRESULT (WINAPI* _D3DXCompileShaderFromFile) (LPCTSTR,const D3DXMACRO*,LPD3DXINCLUDE,LPCSTR,LPCSTR,DWORD,LPD3DXBUFFER*,LPD3DXBUFFER*,LPD3DXCONSTANTTABLE*);
#endif

// D3DXCreateTextureShader
extern HRESULT (WINAPI* _D3DXCreateTextureShader) (const DWORD*, LPD3DXTEXTURESHADER*);

// D3DXCreateFont
#ifdef UNICODE
extern HRESULT (WINAPI* _D3DXCreateFont) (LPDIRECT3DDEVICE9,INT,UINT,UINT,UINT,BOOL,DWORD,DWORD,DWORD,DWORD,LPCWSTR,LPD3DXFONT*);
#else
extern HRESULT (WINAPI* _D3DXCreateFont) (LPDIRECT3DDEVICE9,INT,UINT,UINT,UINT,BOOL,DWORD,DWORD,DWORD,DWORD,LPCTSTR,LPD3DXFONT*);
#endif

INT32 Dx9Core_Init();

#endif
