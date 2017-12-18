#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderUrlResource.hpp"
namespace lol {
  inline Result<RecofrienderUrlResource> GetRecofrienderV1FaqUrl(LeagueClient& _client)
  {
    try {
      return Result<RecofrienderUrlResource> {
        _client.https.request("get", "/recofriender/v1/faq-url?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RecofrienderUrlResource> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetRecofrienderV1FaqUrl(LeagueClient& _client, std::function<void(LeagueClient&,const Result<RecofrienderUrlResource>&)> cb)
  {
    _client.httpsa.request("get", "/recofriender/v1/faq-url?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<RecofrienderUrlResource> { response });
          else
            cb(_client,Result<RecofrienderUrlResource> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}