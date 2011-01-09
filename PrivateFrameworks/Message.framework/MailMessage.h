/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMessageInfo;



@interface MailMessage : Message 
{
    unsigned long long _messageFlags;
    unsigned char _subjectPrefixLength;
    unsigned long long _modSequenceNumber;
    MFMessageInfo *_info;
}

@property unsigned long long modSequenceNumber;

+ (id)messageWithRFC822Data:(id)arg1;
+ (id)forwardedMessagePrefixWithSpacer:(BOOL)arg1;
+ (NSUInteger)validatePriority:(NSInteger)arg1;
+ (NSUInteger)displayablePriorityForPriority:(NSInteger)arg1;
+ (id)replyPrefixWithSpacer:(BOOL)arg1;

- (void)setSubject:(id)arg1;
- (id)account;
- (NSInteger)priority;
- (id)URL;
- (void)dealloc;
- (void)setModSequenceNumber:(unsigned long long)arg1;
- (void)setPriorityFromHeaders:(id)arg1;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (void)markAsReplied;
- (void)markAsForwarded;
- (id)subjectAndPrefixLength:(NSUInteger*)arg1;
- (id)subjectNotIncludingReAndFwdPrefix;
- (id)loadMeetingExternalID;
- (id)remoteMailboxURL;
- (unsigned short)numberOfAttachments;
- (BOOL)shouldSetSummary;
- (id)copyMessageInfo;
- (id)loadMeetingData;
- (id)originalMailboxURL;
- (unsigned long long)modSequenceNumber;
- (void)setMessageInfo:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceivedTimeIntervalSince1970:(double)arg6 dateSentTimeIntervalSince1970:(double)arg7 messageIDHeaderDigest:(id)arg8 inReplyToHeaderDigest:(id)arg9 conversationID:(id)arg10 summary:(id)arg11;
- (id)mailbox;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (void)setMutableInfoFromMessage:(id)arg1;
- (void)markAsViewed;
- (void)markAsNotViewed;
- (id)subject;
- (void)setMessageFlags:(unsigned long long)arg1;
- (id)messageStore;
- (unsigned long long)messageFlags;
- (void)setSummary:(id)arg1;

@end