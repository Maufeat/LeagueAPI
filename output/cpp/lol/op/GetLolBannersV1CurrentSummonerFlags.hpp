#pragma once
#include "../base_op.hpp" 
#include "../def/LolBannersBannerFlag.hpp"
namespace lol {
  inline Result<std::vector<LolBannersBannerFlag>> GetLolBannersV1CurrentSummonerFlags(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolBannersBannerFlag>> {
        _client_.request("get", "/lol-banners/v1/current-summoner/flags?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolBannersBannerFlag>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}