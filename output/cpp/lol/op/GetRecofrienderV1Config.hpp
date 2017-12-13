#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RecofrienderConfig.hpp>
namespace lol {
  Result<RecofrienderConfig> GetRecofrienderV1Config(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/recofriender/v1/config?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}