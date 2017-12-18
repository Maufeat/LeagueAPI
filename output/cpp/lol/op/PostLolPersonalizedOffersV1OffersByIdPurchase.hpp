#pragma once
#include "../base_op.hpp" 
#include "../def/LolPersonalizedOffersPurchaseResponse.hpp"
namespace lol {
  inline Result<LolPersonalizedOffersPurchaseResponse> PostLolPersonalizedOffersV1OffersByIdPurchase(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolPersonalizedOffersPurchaseResponse> {
        _client_.request("post", "/lol-personalized-offers/v1/offers/"+to_string(id)+"/purchase?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPersonalizedOffersPurchaseResponse> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}