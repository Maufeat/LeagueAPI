#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/ClashEventData.hpp>
namespace lol {
  inline Result<std::map<std::string, ClashEventData>> PostLolClashV1Events(const LeagueClient& _client, const std::vector<std::string>& uuids)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::map<std::string, ClashEventData>> {
        _client_.request("post", "/lol-clash/v1/events?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(uuids).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::map<std::string, ClashEventData>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}