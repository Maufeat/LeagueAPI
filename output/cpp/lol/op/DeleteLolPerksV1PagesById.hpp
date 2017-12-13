#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeleteLolPerksV1PagesById(const LeagueClient& _client, const int32_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-perks/v1/pages/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}