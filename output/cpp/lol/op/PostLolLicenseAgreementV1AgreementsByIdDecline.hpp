#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<json> PostLolLicenseAgreementV1AgreementsByIdDecline(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-license-agreement/v1/agreements/"+to_string(id)+"/decline?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}