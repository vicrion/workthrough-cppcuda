import torch
import cppcuda_tutorial

if __name__ == '__main__':
    N = 65536; F = 256
    feats = torch.rand(N, 8, F, device='cuda')
    points = torch.rand(N, 3, device='cuda')*2-1

    out_cuda = cppcuda_tutorial.trilinear_interpolation(feats, points)
    print(out_cuda.shape)

