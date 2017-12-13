#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPersonalizedOffersPurchaseResponse.hpp>
namespace lol {
  Result<LolPersonalizedOffersPurchaseResponse> PostLolPersonalizedOffersV1OffersByIdPurchase(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-personalized-offers/v1/offers/"+to_string(id)+"/purchase?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}