#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderUrlResource.hpp"
namespace lol {
  inline Result<RecofrienderUrlResource> GetRecofrienderV1FaqUrl(LeagueClient& _client)
  {
    try {
      return ToResult<RecofrienderUrlResource>(_client.https.request("get", "/recofriender/v1/faq-url?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RecofrienderUrlResource>(e.code());
    }
  }
  inline void GetRecofrienderV1FaqUrl(LeagueClient& _client, std::function<void(LeagueClient&, const Result<RecofrienderUrlResource>&)> cb)
  {
    _client.httpsa.request("get", "/recofriender/v1/faq-url?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RecofrienderUrlResource>(e));
            else
              cb(_client, ToResult<RecofrienderUrlResource>(response));
        });
  }
}