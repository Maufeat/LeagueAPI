#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RsoAuthAuthorization.hpp>
namespace lol {
  Result<RsoAuthAuthorization> GetRsoAuthV1Authorization(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/rso-auth/v1/authorization?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}