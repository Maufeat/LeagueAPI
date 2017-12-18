#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolEmailVerificationEmailVerificationSession.hpp>
namespace lol {
  inline Result<LolEmailVerificationEmailVerificationSession> GetLolEmailVerificationV1Email(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolEmailVerificationEmailVerificationSession> {
        _client_.request("get", "/lol-email-verification/v1/email?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolEmailVerificationEmailVerificationSession> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}