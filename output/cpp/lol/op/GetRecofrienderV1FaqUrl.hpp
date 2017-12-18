#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RecofrienderUrlResource.hpp>
namespace lol {
  inline Result<RecofrienderUrlResource> GetRecofrienderV1FaqUrl(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RecofrienderUrlResource> {
        _client_.request("get", "/recofriender/v1/faq-url?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RecofrienderUrlResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}