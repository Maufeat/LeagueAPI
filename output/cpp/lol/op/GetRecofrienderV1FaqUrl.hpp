#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RecofrienderUrlResource.hpp>
namespace lol {
  Result<RecofrienderUrlResource> GetRecofrienderV1FaqUrl(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/recofriender/v1/faq-url?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}