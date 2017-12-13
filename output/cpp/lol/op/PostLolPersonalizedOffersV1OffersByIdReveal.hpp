#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPersonalizedOffersUIOffer.hpp>
namespace lol {
  Result<std::vector<LolPersonalizedOffersUIOffer>> PostLolPersonalizedOffersV1OffersByIdReveal(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolPersonalizedOffersUIOffer>> {
        _client_.request("post", "/lol-personalized-offers/v1/offers/"+to_string(id)+"/reveal?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolPersonalizedOffersUIOffer>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}