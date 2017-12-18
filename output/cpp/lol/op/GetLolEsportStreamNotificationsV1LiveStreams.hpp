#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolEsportStreamNotificationsESportsLiveStreams.hpp"
namespace lol {
  inline Result<LolEsportStreamNotificationsESportsLiveStreams> GetLolEsportStreamNotificationsV1LiveStreams(LeagueClient& _client)
  {
    try {
      return Result<LolEsportStreamNotificationsESportsLiveStreams> {
        _client.https.request("get", "/lol-esport-stream-notifications/v1/live-streams?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolEsportStreamNotificationsESportsLiveStreams> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolEsportStreamNotificationsV1LiveStreams(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolEsportStreamNotificationsESportsLiveStreams>&)> cb)
  {
    _client.httpsa.request("get", "/lol-esport-stream-notifications/v1/live-streams?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolEsportStreamNotificationsESportsLiveStreams> { response });
          else
            cb(_client,Result<LolEsportStreamNotificationsESportsLiveStreams> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}