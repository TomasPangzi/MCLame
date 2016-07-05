
#import <Foundation/Foundation.h>

@interface AudioWrapper : NSObject

+ (BOOL)audioPCMtoMP3 :(NSString *)audioFileSavePath :(NSString *)mp3FilePath;
@end
