//  NSJSONSerialization+RemovingNulls.h
//  Created by Richard Turton on 23/12/2013.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSJSONSerialization (RemovingNulls)

/// As the base class method, but pass YES to remove nulls from containers, optionally ignoring those in arrays.
+(nullable id)JSONObjectWithData:(NSData *)data options:(NSJSONReadingOptions)opt error:(NSError *__autoreleasing *)error removingNulls:(BOOL)removingNulls ignoreArrays:(BOOL)ignoreArrays;

@end

@interface NSMutableDictionary (RemovingNulls)

-(void)recursivelyRemoveNulls;
-(void)recursivelyRemoveNullsIgnoringArrays:(BOOL)ignoringArrays;

@end

@interface NSMutableArray (RemovingNulls)

-(void)recursivelyRemoveNulls;
-(void)recursivelyRemoveNullsIgnoringArrays:(BOOL)ignoringArrays;

@end

NS_ASSUME_NONNULL_END
