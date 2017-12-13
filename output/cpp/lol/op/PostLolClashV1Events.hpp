#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/ClashEventData.hpp>
namespace lol {
  Result<std::map<std::string, ClashEventData>> PostLolClashV1Events(const LeagueClient& _client, const std::vector<std::string>& uuids)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-clash/v1/events?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(uuids).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}