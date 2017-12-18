#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/ClashEventData.hpp"
namespace lol {
  inline Result<std::map<std::string, ClashEventData>> PostLolClashV1Events(LeagueClient& _client, const std::vector<std::string>& uuids)
  {
    try {
      return Result<std::map<std::string, ClashEventData>> {
        _client.https.request("post", "/lol-clash/v1/events?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(uuids).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::map<std::string, ClashEventData>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolClashV1Events(LeagueClient& _client, const std::vector<std::string>& uuids, std::function<void(LeagueClient&,const Result<std::map<std::string, ClashEventData>>&)> cb)
  {
    _client.httpsa.request("post", "/lol-clash/v1/events?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(uuids).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::map<std::string, ClashEventData>> { response });
          else
            cb(_client,Result<std::map<std::string, ClashEventData>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}