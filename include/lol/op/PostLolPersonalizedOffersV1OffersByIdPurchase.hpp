#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPersonalizedOffersPurchaseResponse.hpp"
namespace lol {
  template<typename T>
  inline Result<LolPersonalizedOffersPurchaseResponse> PostLolPersonalizedOffersV1OffersByIdPurchase(T& _client, const std::string& id)
  {
    try {
      return ToResult<LolPersonalizedOffersPurchaseResponse>(_client.https.request("post", "/lol-personalized-offers/v1/offers/"+to_string(id)+"/purchase?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolPersonalizedOffersPurchaseResponse>(e.code());
    }
  }
  template<typename T>
  inline void PostLolPersonalizedOffersV1OffersByIdPurchase(T& _client, const std::string& id, std::function<void(T&, const Result<LolPersonalizedOffersPurchaseResponse>&)> cb)
  {
    _client.httpsa.request("post", "/lol-personalized-offers/v1/offers/"+to_string(id)+"/purchase?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolPersonalizedOffersPurchaseResponse>(e));
            else
              cb(_client, ToResult<LolPersonalizedOffersPurchaseResponse>(response));
        });
  }
}