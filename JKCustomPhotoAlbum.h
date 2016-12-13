//
//  JKCustomPhotoAlbum.h
//  Goluk
//
//  Created by mac on 15/10/13.
//  Copyright © 2015年 Mobnotex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Photos/Photos.h>
#import <AssetsLibrary/AssetsLibrary.h>

@interface ALAssetsLibrary(CustomPhotoAlbum)

//保存图片
- (void) saveImage:(UIImage *)image
           toAlbum:(NSString *)albumName
        completion:(ALAssetsLibraryWriteImageCompletionBlock)completion
           failure:(ALAssetsLibraryAccessFailureBlock)failure;

//保存视频
- (void) saveVideo:(NSURL *)videoURL
           toAlbum:(NSString *)albumName
        completion:(ALAssetsLibraryWriteVideoCompletionBlock)completion
           failure:(ALAssetsLibraryAccessFailureBlock)failure;

//通过图片数据保存
- (void)saveImageData:(NSData *)imageData
              toAlbum:(NSString *)albumName
             metadata:(NSDictionary *)metadata
           completion:(ALAssetsLibraryWriteImageCompletionBlock)completion
              failure:(ALAssetsLibraryAccessFailureBlock)failure;

//通过assetURL保存
- (void)addAssetURL:(NSURL *)assetURL
            toAlbum:(NSString *)albumName
         completion:(ALAssetsLibraryWriteImageCompletionBlock)completion
            failure:(ALAssetsLibraryAccessFailureBlock)failure;

//获取相册中的视频资源
- (void)loadAssetsForProperty:(NSString *)property
                    fromAlbum:(NSString *)albumName
                   completion:(void (^)(NSMutableArray *array, NSError *error))completion;

//获取相册中的图片资源
- (void)loadImagesFromAlbum:(NSString *)albumName
                 completion:(void (^)(NSMutableArray *images, NSError *error))completion;

@end
