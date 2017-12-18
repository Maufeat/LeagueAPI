#pragma once
#include "../base_op.hpp" 
#include "../def/LolPersonalizedOffersUIOffer.hpp"
namespace lol {
  inline Result<std::vector<LolPersonalizedOffersUIOffer>> GetLolPersonalizedOffersV1Offers(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolPersonalizedOffersUIOffer>> {
        _client_.request("get", "/lol-personalized-offers/v1/offers?" +
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