#ifndef CALLMEBOT_H
#define CALLMEBOT_h

#include <String.h>
#include <HTTPClient.h>
#include <UrlEncode.h>

class CallMeBot{
  private:
    //String phoneNumber = "REPLACE_WITH_YOUR_PHONE_NUMBER";
    //String apiKey = "REPLACE_WITH_API_KEY";
  public:
    void sendMessage(String message);

};
#endif