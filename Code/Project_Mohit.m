%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% 2D - Real Time Filtering
% ----------------------
% Output of VHDL Code
% ----------------
% Date: 11 Jan 2018
% Author: Mohit Ahuja & Ming DI!!
% Professor: Dr. Julien Dubois
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
clc;
clear all;
close all;

%% Load Output Image Data
Output_Data = load('output.dat');
Width = 128;   Height = 128;    % Define the Width and Height of the Image
Output_1= mat2gray(typecast(uint16(bin2dec(num2str(Output_Data))),'int16'));% Converting data to gray scale
First = Output_1(1:29);         % Adjusting the Image
Output_2 = Output_1(30:end);
Output_3 = [Output_2; First];
% Reshaping the Output Immage w.r.t the width and height defined
Output = reshape(Output_3, Width,Height)';
imwrite(Output, 'Filter_Output.bmp'); % Writing to a defined format Ex: .bmp or .jpg

%% Load Original Lena Image
Orig_data = load('Lena128x128g_8bits.dat');
Width_Original = 128;  Hieght_Original = 128; % Define the Width and Height of the Image
Image_Original = mat2gray(bin2dec(num2str(Orig_data))); % Converting data to gray scale
% Defining the shape of the Original Lena Image w.r.t the width and height defined
Image_Original = reshape(Image_Original, Width_Original,Hieght_Original)';
imwrite(Image_Original, 'Original_Lena.bmp'); % Writing to a defined format Ex: .bmp or .jpg

%% Ploting Results
subplot(121); imshow(Image_Original);
title('Original Image');
subplot(122); imshow(Output);
title('Filter Output Image');

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  END  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%