<form id="loginform" class="form-horizontal" role="form" method="POST" action="">                                    
	<div style="margin-bottom: 25px" class="input-group">
		<span class="input-group-addon"><i class="glyphicon glyphicon-user"></i></span>
		<input type="text" class="form-control" id="email" name="email" value="<?php if(!empty($_POST["email"])) { echo $_POST["email"]; } ?>" placeholder="email" style="background:white;" required>                                        
	</div>                                
	<div style="margin-bottom: 25px" class="input-group">
		<span class="input-group-addon"><i class="glyphicon glyphicon-lock"></i></span>
		<input type="password" class="form-control" id="password" name="password" value="<?php if(!empty($_POST["password"])) { echo $_POST["password"]; } ?>" placeholder="password" required>
	</div>					
	<div style="margin-top:10px" class="form-group">                               
		<div class="col-sm-12 controls">
		  <input type="submit" name="login" value="Login" class="btn btn-info">		
		  				  
		</div>						
	</div>		
</form>