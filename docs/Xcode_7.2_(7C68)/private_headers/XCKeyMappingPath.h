//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  8 2015 15:34:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSCopying-Protocol.h>

@class NSSet, NSString;

@interface XCKeyMappingPath : NSObject <NSCopying>
{
    unsigned long long _keyState;
    XCKeyMappingPath *_next;
    NSSet *_inputs;
    NSString *_output;
    unsigned long long _length;
    NSString *_producedString;
}

+ (id)emptyPath;
+ (id)pathWithKeyState:(unsigned long long)arg1 next:(id)arg2 inputs:(id)arg3 output:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithKeyState:(unsigned long long)arg1 next:(id)arg2 inputs:(id)arg3 output:(id)arg4;
- (id)inputSequenceWithRequiredFlags:(unsigned long long)arg1 excludedFlags:(unsigned long long)arg2;
- (id)inputWithRequiredFlags:(unsigned long long)arg1 excludedFlags:(unsigned long long)arg2;
@property(readonly, copy) NSSet *inputs; // @synthesize inputs=_inputs;
@property(readonly, getter=isComplete) _Bool complete;
@property(readonly, getter=isEmpty) _Bool empty;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long keyState; // @synthesize keyState=_keyState;
@property(readonly) unsigned long long length; // @synthesize length=_length;
@property(readonly, copy) XCKeyMappingPath *next; // @synthesize next=_next;
@property(readonly, copy) NSString *output; // @synthesize output=_output;
@property(readonly, copy) NSString *producedString; // @synthesize producedString=_producedString;

@end

