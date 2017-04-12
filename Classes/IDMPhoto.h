//
//  IDMPhoto.h
//  IDMPhotoBrowser
//
//  Created by Michael Waterfall on 17/10/2010.
//  Copyright 2010 d3i. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IDMPhotoProtocol.h"

// This class models a photo/image and it's caption
// If you want to handle photos, caching, decompression
// yourself then you can simply ensure your custom data model
// conforms to IDMPhotoProtocol
@interface IDMPhoto : NSObject <IDMPhoto>

// Progress download block, used to update the circularView
typedef void (^IDMProgressUpdateBlock)(CGFloat progress);

// Properties
@property (nonatomic, strong) NSString *caption;
@property (nonatomic, strong) IDMProgressUpdateBlock progressUpdateBlock;
@property (nonatomic, strong) UIImage *placeholderImage;

// Class
+ (IDMPhoto *)photoWithImage:(UIImage *)image;
+ (IDMPhoto *)photoWithFilePath:(NSString *)path;

+ (NSArray *)photosWithImages:(NSArray<UIImage *> *)imagesArray;
+ (NSArray *)photosWithFilePaths:(NSArray<NSString *> *)pathsArray;

// Init
- (id)initWithImage:(UIImage *)image;
- (id)initWithFilePath:(NSString *)path;

@end

