#include "InputLayouts.h"

D3D11_INPUT_ELEMENT_DESC SpriteVSLayout[] =
{
    { "POSITION", 0, DXGI_FORMAT_R32G32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 1 },
    { "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, 8, D3D11_INPUT_PER_VERTEX_DATA, 1 },

    { "TRANSFORM",  0, DXGI_FORMAT_R32G32_FLOAT,       1,  0, D3D11_INPUT_PER_INSTANCE_DATA, 1 },
    { "TRANSFORM",  1, DXGI_FORMAT_R32G32_FLOAT,       1,  8, D3D11_INPUT_PER_INSTANCE_DATA, 1 },
    { "TRANSFORM",  2, DXGI_FORMAT_R32G32_FLOAT,       1, 16, D3D11_INPUT_PER_INSTANCE_DATA, 1 },
    { "MATERIALID", 0, DXGI_FORMAT_R32_UINT,           1, 24, D3D11_INPUT_PER_INSTANCE_DATA, 1 },
    { "LAYER",      0, DXGI_FORMAT_R32_FLOAT,          1, 28, D3D11_INPUT_PER_INSTANCE_DATA, 1 },
    { "TEXCOORD",   1, DXGI_FORMAT_R32G32B32A32_FLOAT, 1, 32, D3D11_INPUT_PER_INSTANCE_DATA, 1 },
    { "COLOR",      0, DXGI_FORMAT_R32G32B32A32_FLOAT, 1, 48, D3D11_INPUT_PER_INSTANCE_DATA, 1 },
};
size_t SpriteVSLayoutCount = ARRAYSIZE(SpriteVSLayout);

D3D11_INPUT_ELEMENT_DESC ParticleVSLayout[] =
{
    { "POSITION", 0, DXGI_FORMAT_R32G32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 1 },
    { "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, 8, D3D11_INPUT_PER_VERTEX_DATA, 1 },

    { "POSITION", 1, DXGI_FORMAT_R32G32_FLOAT, 1,  0, D3D11_INPUT_PER_INSTANCE_DATA, 1 },
    { "ROTATION", 1, DXGI_FORMAT_R32_FLOAT,    1,  8, D3D11_INPUT_PER_INSTANCE_DATA, 1 },
    { "SCALE",    1, DXGI_FORMAT_R16_FLOAT,    1, 12, D3D11_INPUT_PER_INSTANCE_DATA, 1 },
    { "MATERIAL", 1, DXGI_FORMAT_R16_UINT,     1, 14, D3D11_INPUT_PER_INSTANCE_DATA, 1 },
};
size_t ParticleVSLayoutCount = ARRAYSIZE(ParticleVSLayout);

