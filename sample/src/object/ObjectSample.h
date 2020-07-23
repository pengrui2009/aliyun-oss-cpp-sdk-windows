#include <alibabacloud/oss/OssClient.h>

class ObjectSample
{
public:
    ObjectSample(const std::string &bucket);
    ~ObjectSample();
 
    void DoesObjectExist();
    void PutFolder();
    void PutObjectFromBuffer();
    void PutObjectFromFile();
    void GetObjectToBuffer();
    void GetObjectToFile();
    void DeleteObject();
    void DeleteObjects();
    void HeadObject();
    void GetObjectMeta();
    void AppendObject();
    void MultipartUploadObject();
    void ResumableObject();

    void PutObjectProgress();
    void GetObjectProgress();

    void PutObjectCallable();
    void GetObjectCallable();

#if !defined(OSS_DISABLE_RESUAMABLE)
    void UploadObjectProgress();
    void MultiCopyObjectProcess();
    void DownloadObjectProcess();
#endif

    void CopyObject();
    void RestoreArchiveObject(const std::string bucket, const std::string key, int maxWaitTimeInSeconds);

    void PutObjectCallback();

    void ListObjects();
    void ListObjectWithMarker();
    void ListObjectWithEncodeType();

private:
    void PrintError(const std::string &funcName, const AlibabaCloud::OSS::OssError &error);
    AlibabaCloud::OSS::OssClient *client;
    std::string bucket_;
};
