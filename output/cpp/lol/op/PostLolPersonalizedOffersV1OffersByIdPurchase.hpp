#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPersonalizedOffersPurchaseResponse.hpp"
namespace lol {
  inline Result<LolPersonalizedOffersPurchaseResponse> PostLolPersonalizedOffersV1OffersByIdPurchase(LeagueClient& _client, const std::string& id)
  {
    try {
      return Result<LolPersonalizedOffersPurchaseResponse> {
        _client.https.request("post", "/lol-personalized-offers/v1/offers/"+to_string(id)+"/purchase?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPersonalizedOffersPurchaseResponse> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolPersonalizedOffersV1OffersByIdPurchase(LeagueClient& _client, const std::string& id, std::function<void(LeagueClient&,const Result<LolPersonalizedOffersPurchaseResponse>&)> cb)
  {
    _client.httpsa.request("post", "/lol-personalized-offers/v1/offers/"+to_string(id)+"/purchase?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolPersonalizedOffersPurchaseResponse> { response });
          else
            cb(_client,Result<LolPersonalizedOffersPurchaseResponse> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}