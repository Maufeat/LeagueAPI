#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/ClashEventData.hpp>
namespace lol {
  Result<ClashEventData> GetLolClashV1EventByUuid(const LeagueClient& _client, const std::string& uuid)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clash/v1/event/"+to_string(uuid)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}