#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/ClubMember.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<ClubMember>> GetLolClubsV1ClubsByClubKeyNominations(T& _client, const std::string& clubKey)
  {
    try {
      return ToResult<std::vector<ClubMember>>(_client.https.request("get", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/nominations?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<ClubMember>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolClubsV1ClubsByClubKeyNominations(T& _client, const std::string& clubKey, std::function<void(T&, const Result<std::vector<ClubMember>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/nominations?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<ClubMember>>(e));
            else
              cb(_client, ToResult<std::vector<ClubMember>>(response));
        });
  }
}