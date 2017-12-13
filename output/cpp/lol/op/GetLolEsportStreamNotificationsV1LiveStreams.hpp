#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolEsportStreamNotificationsESportsLiveStreams.hpp>
namespace lol {
  Result<LolEsportStreamNotificationsESportsLiveStreams> GetLolEsportStreamNotificationsV1LiveStreams(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolEsportStreamNotificationsESportsLiveStreams> {
        _client_.request("get", "/lol-esport-stream-notifications/v1/live-streams?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolEsportStreamNotificationsESportsLiveStreams> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}