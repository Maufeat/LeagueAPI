#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlaytimeReminder.hpp"
namespace lol {
  template<typename T>
  inline Result<PlaytimeReminder> GetLolKrPlaytimeReminderV1Playtime(T& _client)
  {
    try {
      return ToResult<PlaytimeReminder>(_client.https.request("get", "/lol-kr-playtime-reminder/v1/playtime?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PlaytimeReminder>(e.code());
    }
  }
  template<typename T>
  inline void GetLolKrPlaytimeReminderV1Playtime(T& _client, std::function<void(T&, const Result<PlaytimeReminder>&)> cb)
  {
    _client.httpsa.request("get", "/lol-kr-playtime-reminder/v1/playtime?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PlaytimeReminder>(e));
            else
              cb(_client, ToResult<PlaytimeReminder>(response));
        });
  }
}